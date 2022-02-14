
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int display; } ;
typedef TYPE_1__ RDPCLIENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,char*,int,unsigned long*,unsigned char**,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(RDPCLIENT * VAR_1)
{
 unsigned long VAR_2;
 unsigned char *VAR_3;
 int VAR_4;

 if (FUNC_3
     (VAR_1, FUNC_0(VAR_1->display), "_NET_CURRENT_DESKTOP", 1, &VAR_2,
      &VAR_3, 0) < 0)
  return (-1);

 if (VAR_2 != 1)
 {
  FUNC_2(VAR_0, "_NET_CURRENT_DESKTOP has bad length\n");
  return (-1);
 }

 VAR_4 = *VAR_3;
 FUNC_1(VAR_3);
 return VAR_4;
}
