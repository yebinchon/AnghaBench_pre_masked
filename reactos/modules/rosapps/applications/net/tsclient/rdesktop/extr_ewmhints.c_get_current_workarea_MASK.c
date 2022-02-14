
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int display; } ;
typedef TYPE_1__ RDPCLIENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,char*,int const,unsigned long*,unsigned char**,int ) ;
 int VAR_0 ;

int
FUNC_5(RDPCLIENT * VAR_1, uint32 * VAR_2, uint32 * VAR_3, uint32 * VAR_4, uint32 * VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 unsigned char *VAR_8;
 uint32 *VAR_9;
 const uint32 VAR_10 = 0;
 const uint32 VAR_11 = 1;
 const uint32 VAR_12 = 2;
 const uint32 VAR_13 = 3;
 const uint32 VAR_14 = 32 * 4;

 if (FUNC_4
     (VAR_1, FUNC_0(VAR_1->display), "_NET_WORKAREA", VAR_14, &VAR_7,
      &VAR_8, 0) < 0)
  return (-1);

 if (VAR_7 % 4)
 {
  FUNC_2(VAR_0, "_NET_WORKAREA has odd length\n");
  return (-1);
 }

 VAR_6 = FUNC_3(VAR_1);

 if (VAR_6 < 0)
  return -1;

 VAR_9 = (uint32 *) VAR_8;

 *VAR_2 = VAR_9[VAR_6 * 4 + VAR_10];
 *VAR_3 = VAR_9[VAR_6 * 4 + VAR_11];
 *VAR_4 = VAR_9[VAR_6 * 4 + VAR_12];
 *VAR_5 = VAR_9[VAR_6 * 4 + VAR_13];

 FUNC_1(VAR_8);

 return (0);

}
