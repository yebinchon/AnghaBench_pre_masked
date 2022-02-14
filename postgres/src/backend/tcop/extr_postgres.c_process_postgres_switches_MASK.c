
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ProtocolVersion ;
typedef int GucSource ;
typedef scalar_t__ GucContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,char**,char**) ;
 int FUNC_1 (char const*,char*,scalar_t__,int ) ;
 int VAR_12 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int,char**,char*) ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int ,scalar_t__,int ) ;
 int FUNC_11 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 void* FUNC_13 (char*) ;
 int FUNC_14 (int ,char*,int ) ;
 void* VAR_18 ;

void
FUNC_15(int VAR_19, char *VAR_20[], GucContext VAR_21,
        const char **VAR_22)
{
 bool VAR_23 = (VAR_21 == VAR_9);
 int VAR_24 = 0;
 GucSource VAR_25;
 int VAR_26;

 if (VAR_23)
 {
  VAR_25 = VAR_10;


  if (VAR_19 > 1 && FUNC_12(VAR_20[1], "--single") == 0)
  {
   VAR_20++;
   VAR_19--;
  }
 }
 else
 {
  VAR_25 = VAR_11;
 }
 while ((VAR_26 = FUNC_9(VAR_19, VAR_20, "B:bc:C:D:d:EeFf:h:ijk:lN:nOo:Pp:r:S:sTt:v:W:-:")) != -1)
 {
  switch (VAR_26)
  {
   case 'B':
    FUNC_1("shared_buffers", VAR_13, VAR_21, VAR_25);
    break;

   case 'b':

    if (VAR_23)
     VAR_5 = 1;
    break;

   case 'C':

    break;

   case 'D':
    if (VAR_23)
     VAR_18 = FUNC_13(VAR_13);
    break;

   case 'd':
    FUNC_10(FUNC_2(VAR_13), VAR_21, VAR_25);
    break;

   case 'E':
    if (VAR_23)
     VAR_2 = 1;
    break;

   case 'e':
    FUNC_1("datestyle", "euro", VAR_21, VAR_25);
    break;

   case 'F':
    FUNC_1("fsync", "false", VAR_21, VAR_25);
    break;

   case 'f':
    if (!FUNC_11(VAR_13, VAR_21, VAR_25))
     VAR_24++;
    break;

   case 'h':
    FUNC_1("listen_addresses", VAR_13, VAR_21, VAR_25);
    break;

   case 'i':
    FUNC_1("listen_addresses", "*", VAR_21, VAR_25);
    break;

   case 'j':
    if (VAR_23)
     VAR_12 = 1;
    break;

   case 'k':
    FUNC_1("unix_socket_directories", VAR_13, VAR_21, VAR_25);
    break;

   case 'l':
    FUNC_1("ssl", "true", VAR_21, VAR_25);
    break;

   case 'N':
    FUNC_1("max_connections", VAR_13, VAR_21, VAR_25);
    break;

   case 'n':

    break;

   case 'O':
    FUNC_1("allow_system_table_mods", "true", VAR_21, VAR_25);
    break;

   case 'o':
    VAR_24++;
    break;

   case 'P':
    FUNC_1("ignore_system_indexes", "true", VAR_21, VAR_25);
    break;

   case 'p':
    FUNC_1("port", VAR_13, VAR_21, VAR_25);
    break;

   case 'r':

    if (VAR_23)
     FUNC_14(VAR_8, VAR_13, VAR_7);
    break;

   case 'S':
    FUNC_1("work_mem", VAR_13, VAR_21, VAR_25);
    break;

   case 's':
    FUNC_1("log_statement_stats", "true", VAR_21, VAR_25);
    break;

   case 'T':

    break;

   case 't':
    {
     const char *VAR_27 = FUNC_8(VAR_13);

     if (VAR_27)
      FUNC_1(VAR_27, "true", VAR_21, VAR_25);
     else
      VAR_24++;
     break;
    }

   case 'v':
    if (VAR_23)
     VAR_4 = (ProtocolVersion) FUNC_2(VAR_13);
    break;

   case 'W':
    FUNC_1("post_auth_delay", VAR_13, VAR_21, VAR_25);
    break;

   case 'c':
   case '-':
    {
     char *VAR_28,
          *VAR_29;

     FUNC_0(VAR_13, &VAR_28, &VAR_29);
     if (!VAR_29)
     {
      if (VAR_26 == '-')
       FUNC_3(VAR_1,
         (FUNC_4(VAR_0),
          FUNC_6("--%s requires a value",
           VAR_13)));
      else
       FUNC_3(VAR_1,
         (FUNC_4(VAR_0),
          FUNC_6("-c %s requires a value",
           VAR_13)));
     }
     FUNC_1(VAR_28, VAR_29, VAR_21, VAR_25);
     FUNC_7(VAR_28);
     if (VAR_29)
      FUNC_7(VAR_29);
     break;
    }

   default:
    VAR_24++;
    break;
  }

  if (VAR_24)
   break;
 }




 if (!VAR_24 && VAR_22 && *VAR_22 == ((void*)0) && VAR_19 - VAR_15 >= 1)
  *VAR_22 = FUNC_13(VAR_20[VAR_15++]);

 if (VAR_24 || VAR_19 != VAR_15)
 {
  if (VAR_24)
   VAR_15--;


  if (VAR_6)
   FUNC_3(VAR_3,
     (FUNC_4(VAR_0),
      FUNC_6("invalid command-line argument for server process: %s", VAR_20[VAR_15]),
      FUNC_5("Try \"%s --help\" for more information.", VAR_17)));
  else
   FUNC_3(VAR_3,
     (FUNC_4(VAR_0),
      FUNC_6("%s: invalid command-line argument: %s",
       VAR_17, VAR_20[VAR_15]),
      FUNC_5("Try \"%s --help\" for more information.", VAR_17)));
 }





 VAR_15 = 1;



}
