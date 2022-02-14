
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* CRC32 ) (unsigned char const*,unsigned int,unsigned int*) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,unsigned int volatile,char*) ;
 int FUNC_2 (unsigned char const*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(void)
{

 volatile unsigned int VAR_11 = 0x21400;
 volatile unsigned int VAR_12 = VAR_0;
 if (FUNC_1(VAR_1, VAR_11 + 8,
                    (char *)VAR_12) != VAR_2)
 {
  FUNC_0("F DF RD\n");
  return VAR_6;
 }
 return VAR_7;
}
