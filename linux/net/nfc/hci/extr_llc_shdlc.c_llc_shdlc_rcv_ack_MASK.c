
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llc_shdlc {int dnr; int ns; } ;


 int FUNC_0 (struct llc_shdlc*,int) ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct llc_shdlc *VAR_0, int VAR_1)
{
 FUNC_2("remote acked up to frame %d excluded\n", VAR_1);

 if (FUNC_1(VAR_0->dnr, VAR_1, VAR_0->ns)) {
  FUNC_0(VAR_0, VAR_1);
  VAR_0->dnr = VAR_1;
 }
}
