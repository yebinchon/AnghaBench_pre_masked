
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
typedef scalar_t__ int32 ;
struct TYPE_2__ {char* data; } ;
typedef TYPE_1__ PGAlignedBlock ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static bool
FUNC_2(char *VAR_3, uint16 VAR_4, uint16 VAR_5,
      char *VAR_6, uint16 *VAR_7)
{
 int32 VAR_8 = VAR_0 - VAR_5;
 int32 VAR_9;
 int32 VAR_10 = 0;
 char *VAR_11;
 PGAlignedBlock VAR_12;

 if (VAR_5 != 0)
 {

  VAR_11 = VAR_12.data;
  FUNC_0(VAR_11, VAR_3, VAR_4);
  FUNC_0(VAR_11 + VAR_4,
      VAR_3 + (VAR_4 + VAR_5),
      VAR_0 - (VAR_5 + VAR_4));





  VAR_10 = VAR_2;
 }
 else
  VAR_11 = VAR_3;






 VAR_9 = FUNC_1(VAR_11, VAR_8, VAR_6, VAR_1);
 if (VAR_9 >= 0 &&
  VAR_9 + VAR_10 < VAR_8)
 {
  *VAR_7 = (uint16) VAR_9;
  return 1;
 }
 return 0;
}
