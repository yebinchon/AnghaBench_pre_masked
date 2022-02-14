
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {char** cells; int cellsadded; } ;
typedef TYPE_1__ printTableContent ;
struct TYPE_14__ {char* nullPrint; int title; int topt; } ;
typedef TYPE_2__ printQueryOpt ;
struct TYPE_15__ {size_t rank; char* name; } ;
typedef TYPE_3__ pivot_field ;
struct TYPE_16__ {int logfile; int queryFout; TYPE_2__ popt; } ;
typedef int PGresult ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*,int,int) ;
 char* FUNC_4 (int const*,int,int) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_3__*,int,int,int ) ;
 char FUNC_7 (int ) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (char*,char*,char*) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_0 ;
 int FUNC_11 (TYPE_1__*,int ,int,int ) ;
 int FUNC_12 (TYPE_1__*,char*,int,char) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int *,int ,int,int) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static bool
FUNC_15(const PGresult *VAR_2,
     int VAR_3, pivot_field *VAR_4, int VAR_5,
     int VAR_6, pivot_field *VAR_7, int VAR_8,
     int VAR_9)
{
 printQueryOpt VAR_10 = VAR_1.popt;
 printTableContent VAR_11;
 int VAR_12,
    VAR_13;
 char VAR_14;
 int *VAR_15;
 bool VAR_16 = 0;

 FUNC_14(&VAR_11, &VAR_10.topt, VAR_10.title, VAR_3 + 1, VAR_6);




 FUNC_12(&VAR_11,
      FUNC_1(VAR_2, VAR_8),
      0,
      FUNC_7(FUNC_2(VAR_2,
               VAR_8)));






 VAR_15 = (int *) FUNC_10(sizeof(int) * VAR_3);
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  VAR_15[VAR_4[VAR_12].rank] = VAR_12;




 VAR_14 = FUNC_7(FUNC_2(VAR_2, VAR_9));

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
 {
  char *VAR_17;

  VAR_17 = VAR_4[VAR_15[VAR_12]].name ?
   VAR_4[VAR_15[VAR_12]].name :
   (VAR_10.nullPrint ? VAR_10.nullPrint : "");

  FUNC_12(&VAR_11, VAR_17, 0, VAR_14);
 }
 FUNC_8(VAR_15);


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
 {
  int VAR_18 = VAR_7[VAR_12].rank;

  VAR_11.cells[VAR_18 * (VAR_3 + 1)] = VAR_7[VAR_12].name ?
   VAR_7[VAR_12].name :
   (VAR_10.nullPrint ? VAR_10.nullPrint : "");
 }
 VAR_11.cellsadded = VAR_6 * (VAR_3 + 1);




 for (VAR_13 = 0; VAR_13 < FUNC_5(VAR_2); VAR_13++)
 {
  int VAR_19;
  int VAR_20;
  pivot_field *VAR_21,
       *VAR_22;
  pivot_field VAR_23;


  if (!FUNC_3(VAR_2, VAR_13, VAR_8))
   VAR_23.name = FUNC_4(VAR_2, VAR_13, VAR_8);
  else
   VAR_23.name = ((void*)0);
  VAR_21 = (pivot_field *) FUNC_6(&VAR_23,
          VAR_7,
          VAR_6,
          sizeof(pivot_field),
          VAR_0);
  FUNC_0(VAR_21 != ((void*)0));
  VAR_19 = VAR_21->rank;


  if (!FUNC_3(VAR_2, VAR_13, VAR_5))
   VAR_23.name = FUNC_4(VAR_2, VAR_13, VAR_5);
  else
   VAR_23.name = ((void*)0);

  VAR_22 = (pivot_field *) FUNC_6(&VAR_23,
          VAR_4,
          VAR_3,
          sizeof(pivot_field),
          VAR_0);
  FUNC_0(VAR_22 != ((void*)0));
  VAR_20 = VAR_22->rank;


  if (VAR_20 >= 0 && VAR_19 >= 0)
  {
   int VAR_24;


   VAR_24 = 1 + VAR_20 + VAR_19 * (VAR_3 + 1);




   if (VAR_11.cells[VAR_24] != ((void*)0))
   {
    FUNC_9("\\crosstabview: query result contains multiple data values for row \"%s\", column \"%s\"",
        VAR_21->name ? VAR_21->name :
        (VAR_10.nullPrint ? VAR_10.nullPrint : "(null)"),
        VAR_22->name ? VAR_22->name :
        (VAR_10.nullPrint ? VAR_10.nullPrint : "(null)"));
    goto error;
   }

   VAR_11.cells[VAR_24] = !FUNC_3(VAR_2, VAR_13, VAR_9) ?
    FUNC_4(VAR_2, VAR_13, VAR_9) :
    (VAR_10.nullPrint ? VAR_10.nullPrint : "");
  }
 }





 for (VAR_12 = 0; VAR_12 < VAR_11.cellsadded; VAR_12++)
 {
  if (VAR_11.cells[VAR_12] == ((void*)0))
   VAR_11.cells[VAR_12] = "";
 }

 FUNC_11(&VAR_11, VAR_1.queryFout, 0, VAR_1.logfile);
 VAR_16 = 1;

error:
 FUNC_13(&VAR_11);

 return VAR_16;
}
