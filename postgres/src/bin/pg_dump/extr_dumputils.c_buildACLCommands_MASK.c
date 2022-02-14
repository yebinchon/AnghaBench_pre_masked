
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ len; char const* data; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,char const*,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (char*,char const*,char const*,char const*,int,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (char const*,char***,int*) ;
 int FUNC_9 (TYPE_1__*,char*,char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;

bool
FUNC_13(const char *VAR_0, const char *VAR_1, const char *VAR_2,
     const char *VAR_3, const char *VAR_4, const char *VAR_5,
     const char *VAR_6, const char *VAR_7, int VAR_8,
     PQExpBuffer VAR_9)
{
 bool VAR_10 = 1;
 char **VAR_11 = ((void*)0);
 char **VAR_12 = ((void*)0);
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15;
 PQExpBuffer VAR_16,
    VAR_17,
    VAR_18,
    VAR_19;
 PQExpBuffer VAR_20,
    VAR_21;
 bool VAR_22 = 0;

 if (FUNC_11(VAR_4) == 0 && FUNC_11(VAR_5) == 0)
  return 1;


 if (VAR_6 && *VAR_6 == '\0')
  VAR_6 = ((void*)0);

 if (FUNC_11(VAR_4) != 0)
 {
  if (!FUNC_8(VAR_4, &VAR_11, &VAR_13))
  {
   if (VAR_11)
    FUNC_6(VAR_11);
   return 0;
  }
 }

 if (FUNC_11(VAR_5) != 0)
 {
  if (!FUNC_8(VAR_5, &VAR_12, &VAR_14))
  {
   if (VAR_11)
    FUNC_6(VAR_11);
   if (VAR_12)
    FUNC_6(VAR_12);
   return 0;
  }
 }

 VAR_16 = FUNC_3();
 VAR_17 = FUNC_3();
 VAR_18 = FUNC_3();
 VAR_19 = FUNC_3();
 VAR_20 = FUNC_3();
 VAR_21 = FUNC_3();
 if (VAR_8 < 90600)
 {
  FUNC_0(VAR_14 == 0);

  FUNC_1(VAR_20, "%sREVOKE ALL", VAR_7);
  if (VAR_1)
   FUNC_1(VAR_20, "(%s)", VAR_1);
  FUNC_1(VAR_20, " ON %s ", VAR_3);
  if (VAR_2 && *VAR_2)
   FUNC_1(VAR_20, "%s.", FUNC_5(VAR_2));
  FUNC_1(VAR_20, "%s FROM PUBLIC;\n", VAR_0);
 }
 else
 {

  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
  {
   if (!FUNC_7(VAR_12[VAR_15], VAR_3, VAR_0, VAR_1, VAR_8,
         VAR_16, VAR_17, VAR_18, VAR_19))
   {
    VAR_10 = 0;
    break;
   }

   if (VAR_18->len > 0 || VAR_19->len > 0)
   {
    if (VAR_18->len > 0)
    {
     FUNC_1(VAR_20, "%sREVOKE %s ON %s ",
           VAR_7, VAR_18->data, VAR_3);
     if (VAR_2 && *VAR_2)
      FUNC_1(VAR_20, "%s.", FUNC_5(VAR_2));
     FUNC_1(VAR_20, "%s FROM ", VAR_0);
     if (VAR_16->len == 0)
      FUNC_2(VAR_20, "PUBLIC;\n");
     else if (FUNC_12(VAR_16->data, "group ",
          FUNC_11("group ")) == 0)
      FUNC_1(VAR_20, "GROUP %s;\n",
            FUNC_5(VAR_16->data + FUNC_11("group ")));
     else
      FUNC_1(VAR_20, "%s;\n",
            FUNC_5(VAR_16->data));
    }
    if (VAR_19->len > 0)
    {
     FUNC_1(VAR_20,
           "%sREVOKE GRANT OPTION FOR %s ON %s ",
           VAR_7, VAR_19->data, VAR_3);
     if (VAR_2 && *VAR_2)
      FUNC_1(VAR_20, "%s.", FUNC_5(VAR_2));
     FUNC_1(VAR_20, "%s FROM ", VAR_0);
     if (VAR_16->len == 0)
      FUNC_2(VAR_20, "PUBLIC");
     else if (FUNC_12(VAR_16->data, "group ",
          FUNC_11("group ")) == 0)
      FUNC_1(VAR_20, "GROUP %s",
            FUNC_5(VAR_16->data + FUNC_11("group ")));
     else
      FUNC_2(VAR_20, FUNC_5(VAR_16->data));
    }
   }
  }
 }
 if (VAR_8 < 80200 && FUNC_10(VAR_3, "DATABASE") == 0)
 {

  FUNC_1(VAR_20, "%sGRANT CONNECT ON %s %s TO PUBLIC;\n",
        VAR_7, VAR_3, VAR_0);
 }


 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
 {
  if (!FUNC_7(VAR_11[VAR_15], VAR_3, VAR_0, VAR_1, VAR_8,
        VAR_16, VAR_17, VAR_18, VAR_19))
  {
   VAR_10 = 0;
   break;
  }

  if (VAR_17->len == 0 && VAR_6)
   FUNC_9(VAR_17, "%s", VAR_6);

  if (VAR_18->len > 0 || VAR_19->len > 0)
  {







   if (VAR_8 < 90600 && VAR_6
    && FUNC_10(VAR_16->data, VAR_6) == 0
    && FUNC_10(VAR_17->data, VAR_6) == 0)
   {
    VAR_22 = 1;





    if (FUNC_10(VAR_19->data, "ALL") != 0)
    {
     FUNC_1(VAR_20, "%sREVOKE ALL", VAR_7);
     if (VAR_1)
      FUNC_1(VAR_20, "(%s)", VAR_1);
     FUNC_1(VAR_20, " ON %s ", VAR_3);
     if (VAR_2 && *VAR_2)
      FUNC_1(VAR_20, "%s.", FUNC_5(VAR_2));
     FUNC_1(VAR_20, "%s FROM %s;\n",
           VAR_0, FUNC_5(VAR_16->data));
     if (VAR_18->len > 0)
     {
      FUNC_1(VAR_20,
            "%sGRANT %s ON %s ",
            VAR_7, VAR_18->data, VAR_3);
      if (VAR_2 && *VAR_2)
       FUNC_1(VAR_20, "%s.", FUNC_5(VAR_2));
      FUNC_1(VAR_20,
            "%s TO %s;\n",
            VAR_0, FUNC_5(VAR_16->data));
     }
     if (VAR_19->len > 0)
     {
      FUNC_1(VAR_20,
            "%sGRANT %s ON %s ",
            VAR_7, VAR_19->data, VAR_3);
      if (VAR_2 && *VAR_2)
       FUNC_1(VAR_20, "%s.", FUNC_5(VAR_2));
      FUNC_1(VAR_20,
            "%s TO %s WITH GRANT OPTION;\n",
            VAR_0, FUNC_5(VAR_16->data));
     }
    }
   }
   else
   {
    if (VAR_17->len > 0
     && (!VAR_6 || FUNC_10(VAR_6, VAR_17->data) != 0))
     FUNC_1(VAR_21, "SET SESSION AUTHORIZATION %s;\n",
           FUNC_5(VAR_17->data));

    if (VAR_18->len > 0)
    {
     FUNC_1(VAR_21, "%sGRANT %s ON %s ",
           VAR_7, VAR_18->data, VAR_3);
     if (VAR_2 && *VAR_2)
      FUNC_1(VAR_21, "%s.", FUNC_5(VAR_2));
     FUNC_1(VAR_21, "%s TO ", VAR_0);
     if (VAR_16->len == 0)
      FUNC_2(VAR_21, "PUBLIC;\n");
     else if (FUNC_12(VAR_16->data, "group ",
          FUNC_11("group ")) == 0)
      FUNC_1(VAR_21, "GROUP %s;\n",
            FUNC_5(VAR_16->data + FUNC_11("group ")));
     else
      FUNC_1(VAR_21, "%s;\n", FUNC_5(VAR_16->data));
    }
    if (VAR_19->len > 0)
    {
     FUNC_1(VAR_21, "%sGRANT %s ON %s ",
           VAR_7, VAR_19->data, VAR_3);
     if (VAR_2 && *VAR_2)
      FUNC_1(VAR_21, "%s.", FUNC_5(VAR_2));
     FUNC_1(VAR_21, "%s TO ", VAR_0);
     if (VAR_16->len == 0)
      FUNC_2(VAR_21, "PUBLIC");
     else if (FUNC_12(VAR_16->data, "group ",
          FUNC_11("group ")) == 0)
      FUNC_1(VAR_21, "GROUP %s",
            FUNC_5(VAR_16->data + FUNC_11("group ")));
     else
      FUNC_2(VAR_21, FUNC_5(VAR_16->data));
     FUNC_2(VAR_21, " WITH GRANT OPTION;\n");
    }

    if (VAR_17->len > 0
     && (!VAR_6 || FUNC_10(VAR_6, VAR_17->data) != 0))
     FUNC_2(VAR_21, "RESET SESSION AUTHORIZATION;\n");
   }
  }
 }







 if (VAR_8 < 90600 && !VAR_22 && VAR_6)
 {
  FUNC_1(VAR_20, "%sREVOKE ALL", VAR_7);
  if (VAR_1)
   FUNC_1(VAR_20, "(%s)", VAR_1);
  FUNC_1(VAR_20, " ON %s ", VAR_3);
  if (VAR_2 && *VAR_2)
   FUNC_1(VAR_20, "%s.", FUNC_5(VAR_2));
  FUNC_1(VAR_20, "%s FROM %s;\n",
        VAR_0, FUNC_5(VAR_6));
 }

 FUNC_4(VAR_16);
 FUNC_4(VAR_17);
 FUNC_4(VAR_18);
 FUNC_4(VAR_19);

 FUNC_1(VAR_9, "%s%s", VAR_20->data, VAR_21->data);
 FUNC_4(VAR_20);
 FUNC_4(VAR_21);

 if (VAR_11)
  FUNC_6(VAR_11);

 if (VAR_12)
  FUNC_6(VAR_12);

 return VAR_10;
}
