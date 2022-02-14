
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int relopt_string ;
typedef int relopt_real ;
typedef int relopt_int ;
struct TYPE_4__ {int type; int lockmode; int namelen; int kinds; int * desc; void* name; } ;
typedef TYPE_1__ relopt_gen ;
typedef int relopt_enum ;
typedef int relopt_bool ;
typedef int bits32 ;
typedef int MemoryContext ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;





 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* FUNC_2 (size_t) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static relopt_gen *
FUNC_5(bits32 VAR_2, int VAR_3, const char *VAR_4, const char *VAR_5,
       LOCKMODE VAR_6)
{
 MemoryContext VAR_7;
 size_t VAR_8;
 relopt_gen *VAR_9;

 VAR_7 = FUNC_0(VAR_1);

 switch (VAR_3)
 {
  case 132:
   VAR_8 = sizeof(relopt_bool);
   break;
  case 130:
   VAR_8 = sizeof(relopt_int);
   break;
  case 129:
   VAR_8 = sizeof(relopt_real);
   break;
  case 131:
   VAR_8 = sizeof(relopt_enum);
   break;
  case 128:
   VAR_8 = sizeof(relopt_string);
   break;
  default:
   FUNC_1(VAR_0, "unsupported reloption type %d", VAR_3);
   return ((void*)0);
 }

 VAR_9 = FUNC_2(VAR_8);

 VAR_9->name = FUNC_3(VAR_4);
 if (VAR_5)
  VAR_9->desc = FUNC_3(VAR_5);
 else
  VAR_9->desc = ((void*)0);
 VAR_9->kinds = VAR_2;
 VAR_9->namelen = FUNC_4(VAR_4);
 VAR_9->type = VAR_3;
 VAR_9->lockmode = VAR_6;

 FUNC_0(VAR_7);

 return VAR_9;
}
