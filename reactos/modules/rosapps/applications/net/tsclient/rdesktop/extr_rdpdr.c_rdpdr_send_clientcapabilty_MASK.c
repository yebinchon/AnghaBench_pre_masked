
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8 ;
struct TYPE_6__ {int channel; } ;
struct TYPE_7__ {TYPE_1__ rdpdr; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(RDPCLIENT * VAR_0)
{
 uint8 VAR_1[4] = "rDPC";
 STREAM VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_0->rdpdr.channel, 0x50);
 FUNC_4(VAR_2, VAR_1, 4);
 FUNC_3(VAR_2, 5);
 FUNC_2(VAR_2, 1);
 FUNC_2(VAR_2, 0x28);
 FUNC_3(VAR_2, 1);
 FUNC_3(VAR_2, 2);
 FUNC_2(VAR_2, 2);
 FUNC_2(VAR_2, 5);
 FUNC_2(VAR_2, 1);
 FUNC_2(VAR_2, 5);
 FUNC_2(VAR_2, 0xFFFF);
 FUNC_2(VAR_2, 0);
 FUNC_3(VAR_2, 0);
 FUNC_3(VAR_2, 3);
 FUNC_3(VAR_2, 0);
 FUNC_3(VAR_2, 0);
 FUNC_2(VAR_2, 2);
 FUNC_2(VAR_2, 8);
 FUNC_3(VAR_2, 1);
 FUNC_2(VAR_2, 3);
 FUNC_2(VAR_2, 8);
 FUNC_3(VAR_2, 1);
 FUNC_2(VAR_2, 4);
 FUNC_2(VAR_2, 8);
 FUNC_3(VAR_2, 1);
 FUNC_2(VAR_2, 5);
 FUNC_2(VAR_2, 8);
 FUNC_3(VAR_2, 1);

 FUNC_5(VAR_2);
 FUNC_1(VAR_0, VAR_2, VAR_0->rdpdr.channel);
}
