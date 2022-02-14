
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tableType_t ;
struct TYPE_5__ {int internal_donotuse; } ;
typedef TYPE_1__ LZ4_stream_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,char*,int*,int,int const) ;
 int FUNC_2 (TYPE_1__*,char const*,char*,int,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(
 LZ4_stream_t *VAR_4,
 const char *VAR_5,
 char *VAR_6,
 int *VAR_7,
 int VAR_8)
{



 const tableType_t VAR_9 = VAR_1;


 FUNC_3(VAR_4);

 if (VAR_8 >= FUNC_0(*VAR_7)) {

  return FUNC_2(
   VAR_4, VAR_5, VAR_6, *VAR_7,
   VAR_8, 1);
 } else {
  if (*VAR_7 < VAR_0)
   return FUNC_1(
    &VAR_4->internal_donotuse,
    VAR_5, VAR_6, VAR_7,
    VAR_8, VAR_2);
  else
   return FUNC_1(
    &VAR_4->internal_donotuse,
    VAR_5, VAR_6, VAR_7,
    VAR_8, VAR_9);
 }
}
