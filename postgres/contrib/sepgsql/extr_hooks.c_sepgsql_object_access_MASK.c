
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int createdb_dtemplate; } ;
struct TYPE_9__ {int dropflags; } ;
struct TYPE_8__ {int result; int ereport_on_violation; } ;
struct TYPE_7__ {int is_internal; } ;
struct TYPE_6__ {int is_internal; } ;
typedef int const Oid ;
typedef int ObjectAccessType ;
typedef TYPE_1__ ObjectAccessPostCreate ;
typedef TYPE_2__ ObjectAccessPostAlter ;
typedef TYPE_3__ ObjectAccessNamespaceSearch ;
typedef TYPE_4__ ObjectAccessDrop ;


 int FUNC_0 (int) ;

 int VAR_0 ;






 int VAR_1 ;


 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int const,int const,int,void*) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int const,int) ;
 TYPE_5__ VAR_2 ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int const,int ) ;
 int FUNC_8 (int const) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (int const) ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int const) ;
 int FUNC_13 (int const) ;
 int FUNC_14 (int const) ;
 int FUNC_15 (int const) ;
 int FUNC_16 (int const) ;
 int FUNC_17 (int const) ;
 int FUNC_18 (int const,int ) ;
 int FUNC_19 (int const) ;
 int FUNC_20 (int,int const,int const,int,void*) ;

__attribute__((used)) static void
FUNC_21(ObjectAccessType VAR_3,
       Oid VAR_4,
       Oid VAR_5,
       int VAR_6,
       void *VAR_7)
{
 if (&FUNC_2)
  FUNC_2) (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 switch (VAR_3)
 {
  case 130:
   {
    ObjectAccessPostCreate *VAR_8 = VAR_7;
    bool VAR_9;

    VAR_9 = VAR_8 ? VAR_8->is_internal : 0;

    switch (VAR_4)
    {
     case 136:
      FUNC_0(!VAR_9);
      FUNC_7(VAR_5,
              VAR_2.createdb_dtemplate);
      break;

     case 135:
      FUNC_0(!VAR_9);
      FUNC_17(VAR_5);
      break;

     case 128:
      if (VAR_6 == 0)
      {
       if (VAR_9)
        break;

       FUNC_14(VAR_5);
      }
      else
       FUNC_4(VAR_5, VAR_6);
      break;

     case 129:
      FUNC_0(!VAR_9);
      FUNC_11(VAR_5);
      break;

     default:

      break;
    }
   }
   break;

  case 134:
   {
    ObjectAccessDrop *VAR_10 = (ObjectAccessDrop *) VAR_7;






    if ((VAR_10->dropflags & VAR_1) != 0)
     break;

    switch (VAR_4)
    {
     case 136:
      FUNC_6(VAR_5);
      break;

     case 135:
      FUNC_16(VAR_5);
      break;

     case 128:
      if (VAR_6 == 0)
       FUNC_13(VAR_5);
      else
       FUNC_3(VAR_5, VAR_6);
      break;

     case 129:
      FUNC_9(VAR_5);
      break;

     default:

      break;
    }
   }
   break;

  case 131:
   {
    ObjectAccessPostAlter *VAR_11 = VAR_7;
    bool VAR_12 = VAR_11->is_internal;

    switch (VAR_4)
    {
     case 136:
      FUNC_0(!VAR_12);
      FUNC_8(VAR_5);
      break;

     case 135:
      FUNC_0(!VAR_12);
      FUNC_19(VAR_5);
      break;

     case 128:
      if (VAR_6 == 0)
      {







       if (VAR_12)
        break;

       FUNC_15(VAR_5);
      }
      else
       FUNC_5(VAR_5, VAR_6);
      break;

     case 129:
      FUNC_0(!VAR_12);
      FUNC_12(VAR_5);
      break;

     default:

      break;
    }
   }
   break;

  case 132:
   {
    ObjectAccessNamespaceSearch *VAR_13 = VAR_7;





    if (!VAR_13->result)
     break;

    FUNC_0(VAR_4 == 135);
    FUNC_0(VAR_13->result);
    VAR_13->result
     = FUNC_18(VAR_5,
           VAR_13->ereport_on_violation);
   }
   break;

  case 133:
   {
    FUNC_0(VAR_4 == 129);
    FUNC_10(VAR_5);
   }
   break;

  default:
   FUNC_1(VAR_0, "unexpected object access type: %d", (int) VAR_3);
   break;
 }
}
