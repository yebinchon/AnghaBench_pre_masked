
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_4__ {scalar_t__ Pfdebug; int noticeHooks; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,unsigned long,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,unsigned long) ;
 int FUNC_4 (char const*,int,TYPE_1__*) ;

int
FUNC_5(int VAR_1, size_t VAR_2, PGconn *VAR_3)
{
 uint16 VAR_4;
 uint32 VAR_5;

 switch (VAR_2)
 {
  case 2:
   VAR_4 = FUNC_1((uint16) VAR_1);
   if (FUNC_4((const char *) &VAR_4, 2, VAR_3))
    return VAR_0;
   break;
  case 4:
   VAR_5 = FUNC_2((uint32) VAR_1);
   if (FUNC_4((const char *) &VAR_5, 4, VAR_3))
    return VAR_0;
   break;
  default:
   FUNC_3(&VAR_3->noticeHooks,
        "integer of size %lu not supported by pqPutInt",
        (unsigned long) VAR_2);
   return VAR_0;
 }

 if (VAR_3->Pfdebug)
  FUNC_0(VAR_3->Pfdebug, "To backend (%lu#)> %d\n", (unsigned long) VAR_2, VAR_1);

 return 0;
}
