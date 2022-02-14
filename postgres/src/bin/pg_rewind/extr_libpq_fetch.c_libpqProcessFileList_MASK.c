
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int file_type_t ;
typedef int PGresult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 char* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int ,int ,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;

void
FUNC_12(void)
{
 PGresult *VAR_5;
 const char *VAR_6;
 int VAR_7;
 VAR_6 =
  "WITH RECURSIVE files (path, filename, size, isdir) AS (\n"
  "  SELECT '' AS path, filename, size, isdir FROM\n"
  "  (SELECT pg_ls_dir('.', true, false) AS filename) AS fn,\n"
  "        pg_stat_file(fn.filename, true) AS this\n"
  "  UNION ALL\n"
  "  SELECT parent.path || parent.filename || '/' AS path,\n"
  "         fn, this.size, this.isdir\n"
  "  FROM files AS parent,\n"
  "       pg_ls_dir(parent.path || parent.filename, true, false) AS fn,\n"
  "       pg_stat_file(parent.path || parent.filename || '/' || fn, true) AS this\n"
  "       WHERE parent.isdir = 't'\n"
  ")\n"
  "SELECT path || filename, size, isdir,\n"
  "       pg_tablespace_location(pg_tablespace.oid) AS link_target\n"
  "FROM files\n"
  "LEFT OUTER JOIN pg_tablespace ON files.path = 'pg_tblspc/'\n"
  "                             AND oid::text = files.filename\n";
 VAR_5 = FUNC_1(VAR_4, VAR_6);

 if (FUNC_7(VAR_5) != VAR_3)
  FUNC_9("could not fetch file list: %s",
     FUNC_6(VAR_5));


 if (FUNC_4(VAR_5) != 4)
  FUNC_9("unexpected result set while fetching file list");


 for (VAR_7 = 0; VAR_7 < FUNC_5(VAR_5); VAR_7++)
 {
  char *VAR_8 = FUNC_3(VAR_5, VAR_7, 0);
  int64 VAR_9 = FUNC_8(FUNC_3(VAR_5, VAR_7, 1));
  bool VAR_10 = (FUNC_11(FUNC_3(VAR_5, VAR_7, 2), "t") == 0);
  char *VAR_11 = FUNC_3(VAR_5, VAR_7, 3);
  file_type_t VAR_12;

  if (FUNC_2(VAR_5, 0, 1))
  {




   continue;
  }

  if (VAR_11[0])
   VAR_12 = VAR_2;
  else if (VAR_10)
   VAR_12 = VAR_0;
  else
   VAR_12 = VAR_1;

  FUNC_10(VAR_8, VAR_12, VAR_9, VAR_11);
 }
 FUNC_0(VAR_5);
}
