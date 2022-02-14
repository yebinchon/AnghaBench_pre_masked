
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int szTest; int pStmt; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,double) ;
 int FUNC_5 (int ,int,char const*,int,int ) ;

void FUNC_6(void){
  static const char *VAR_2[] = {

    "534...9.."
    "67.195..."
    ".98....6."
    "8...6...3"
    "4..8.3..1"
    "....2...6"
    ".6....28."
    "...419..5"
    "...28..79",


    "53....9.."
    "6..195..."
    ".98....6."
    "8...6...3"
    "4..8.3..1"
    "....2...6"
    ".6....28."
    "...419..5"
    "....8..79",


    "53......."
    "6..195..."
    ".98....6."
    "8...6...3"
    "4..8.3..1"
    "....2...6"
    ".6....28."
    "...419..5"
    "....8..79",
  };
  const char *VAR_3;
  double VAR_4;
  int VAR_5;

  if( VAR_1.szTest<25 ){
    VAR_3 = VAR_2[0];
  }else if( VAR_1.szTest<70 ){
    VAR_3 = VAR_2[1];
  }else{
    VAR_3 = VAR_2[2];
  }
  FUNC_0(100, "Sudoku with recursive 'digits'");
  FUNC_2(
    "WITH RECURSIVE\n"
    "  input(sud) AS (VALUES(?1)),\n"
    "  digits(z,lp) AS (\n"
    "    VALUES('1', 1)\n"
    "    UNION ALL\n"
    "    SELECT CAST(lp+1 AS TEXT), lp+1 FROM digits WHERE lp<9\n"
    "  ),\n"
    "  x(s, ind) AS (\n"
    "    SELECT sud, instr(sud, '.') FROM input\n"
    "    UNION ALL\n"
    "    SELECT\n"
    "      substr(s, 1, ind-1) || z || substr(s, ind+1),\n"
    "      instr( substr(s, 1, ind-1) || z || substr(s, ind+1), '.' )\n"
    "     FROM x, digits AS z\n"
    "    WHERE ind>0\n"
    "      AND NOT EXISTS (\n"
    "            SELECT 1\n"
    "              FROM digits AS lp\n"
    "             WHERE z.z = substr(s, ((ind-1)/9)*9 + lp, 1)\n"
    "                OR z.z = substr(s, ((ind-1)%%9) + (lp-1)*9 + 1, 1)\n"
    "                OR z.z = substr(s, (((ind-1)/3) %% 3) * 3\n"
    "                        + ((ind-1)/27) * 27 + lp\n"
    "                        + ((lp-1) / 3) * 6, 1)\n"
    "         )\n"
    "  )\n"
    "SELECT s FROM x WHERE ind=0;"
  );
  FUNC_5(VAR_1.pStmt, 1, VAR_3, -1, VAR_0);
  FUNC_3();
  FUNC_1();

  FUNC_0(200, "Sudoku with VALUES 'digits'");
  FUNC_2(
    "WITH RECURSIVE\n"
    "  input(sud) AS (VALUES(?1)),\n"
    "  digits(z,lp) AS (VALUES('1',1),('2',2),('3',3),('4',4),('5',5),\n"
    "                         ('6',6),('7',7),('8',8),('9',9)),\n"
    "  x(s, ind) AS (\n"
    "    SELECT sud, instr(sud, '.') FROM input\n"
    "    UNION ALL\n"
    "    SELECT\n"
    "      substr(s, 1, ind-1) || z || substr(s, ind+1),\n"
    "      instr( substr(s, 1, ind-1) || z || substr(s, ind+1), '.' )\n"
    "     FROM x, digits AS z\n"
    "    WHERE ind>0\n"
    "      AND NOT EXISTS (\n"
    "            SELECT 1\n"
    "              FROM digits AS lp\n"
    "             WHERE z.z = substr(s, ((ind-1)/9)*9 + lp, 1)\n"
    "                OR z.z = substr(s, ((ind-1)%%9) + (lp-1)*9 + 1, 1)\n"
    "                OR z.z = substr(s, (((ind-1)/3) %% 3) * 3\n"
    "                        + ((ind-1)/27) * 27 + lp\n"
    "                        + ((lp-1) / 3) * 6, 1)\n"
    "         )\n"
    "  )\n"
    "SELECT s FROM x WHERE ind=0;"
  );
  FUNC_5(VAR_1.pStmt, 1, VAR_3, -1, VAR_0);
  FUNC_3();
  FUNC_1();

  VAR_4 = 5.0/VAR_1.szTest;
  FUNC_0(300, "Mandelbrot Set with spacing=%f", VAR_4);
  FUNC_2(
   "WITH RECURSIVE \n"
   "  xaxis(x) AS (VALUES(-2.0) UNION ALL SELECT x+?1 FROM xaxis WHERE x<1.2),\n"
   "  yaxis(y) AS (VALUES(-1.0) UNION ALL SELECT y+?2 FROM yaxis WHERE y<1.0),\n"
   "  m(iter, cx, cy, x, y) AS (\n"
   "    SELECT 0, x, y, 0.0, 0.0 FROM xaxis, yaxis\n"
   "    UNION ALL\n"
   "    SELECT iter+1, cx, cy, x*x-y*y + cx, 2.0*x*y + cy FROM m \n"
   "     WHERE (x*x + y*y) < 4.0 AND iter<28\n"
   "  ),\n"
   "  m2(iter, cx, cy) AS (\n"
   "    SELECT max(iter), cx, cy FROM m GROUP BY cx, cy\n"
   "  ),\n"
   "  a(t) AS (\n"
   "    SELECT group_concat( substr(' .+*#', 1+min(iter/7,4), 1), '') \n"
   "    FROM m2 GROUP BY cy\n"
   "  )\n"
   "SELECT group_concat(rtrim(t),x'0a') FROM a;"
  );
  FUNC_4(VAR_1.pStmt, 1, VAR_4*.05);
  FUNC_4(VAR_1.pStmt, 2, VAR_4);
  FUNC_3();
  FUNC_1();

  VAR_5 = 10000*VAR_1.szTest;
  FUNC_0(400, "EXCEPT operator on %d-element tables", VAR_5);
  FUNC_2(
    "WITH RECURSIVE \n"
    "  t1(x) AS (VALUES(2) UNION ALL SELECT x+2 FROM t1 WHERE x<%d),\n"
    "  t2(y) AS (VALUES(3) UNION ALL SELECT y+3 FROM t2 WHERE y<%d)\n"
    "SELECT count(x), avg(x) FROM (\n"
    "  SELECT x FROM t1 EXCEPT SELECT y FROM t2 ORDER BY 1\n"
    ");",
    VAR_5, VAR_5
  );
  FUNC_3();
  FUNC_1();
}
