
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8 ;
typedef int uint32 ;
struct TYPE_6__ {int channel; } ;
struct TYPE_7__ {TYPE_1__ rdpdr; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(RDPCLIENT * VAR_0, uint32 VAR_1, uint32 VAR_2, uint32 VAR_3, uint32 VAR_4, uint8 * VAR_5,
        uint32 VAR_6)
{
 uint8 VAR_7[4] = "rDCI";
 STREAM VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_0->rdpdr.channel, 20 + VAR_6);
 FUNC_3(VAR_8, VAR_7, 4);
 FUNC_2(VAR_8, VAR_1);
 FUNC_2(VAR_8, VAR_2);
 FUNC_2(VAR_8, VAR_3);
 FUNC_2(VAR_8, VAR_4);
 FUNC_4(VAR_8, VAR_5, VAR_6);
 FUNC_6(VAR_8);





 FUNC_1(VAR_0, VAR_8, VAR_0->rdpdr.channel);
}
