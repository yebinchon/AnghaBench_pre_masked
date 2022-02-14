
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint8 ;
typedef int uint32 ;
struct TYPE_7__ {int channel; } ;
struct TYPE_8__ {TYPE_1__ rdpdr; int * rdpdr_clientname; int * hostname; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(RDPCLIENT * VAR_0)
{
 uint8 VAR_1[4] = "rDNC";
 STREAM VAR_2;
 uint32 VAR_3;

 if (((void*)0) == VAR_0->rdpdr_clientname)
 {
  VAR_0->rdpdr_clientname = VAR_0->hostname;
 }
 VAR_3 = (FUNC_8(VAR_0->rdpdr_clientname) + 1) * 2;

 VAR_2 = FUNC_0(VAR_0, VAR_0->rdpdr.channel, 16 + VAR_3);
 FUNC_5(VAR_2, VAR_1, 4);
 FUNC_2(VAR_2, 0x63);
 FUNC_2(VAR_2, 0x72);
 FUNC_3(VAR_2, 0);
 FUNC_4(VAR_2, VAR_3);
 FUNC_6(VAR_0, VAR_2, VAR_0->rdpdr_clientname, VAR_3 - 2);
 FUNC_7(VAR_2);
 FUNC_1(VAR_0, VAR_2, VAR_0->rdpdr.channel);
}
