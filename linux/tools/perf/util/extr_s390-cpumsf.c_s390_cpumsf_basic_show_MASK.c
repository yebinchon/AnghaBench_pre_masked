
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_basic_entry {int def; unsigned long long prim_asn; unsigned long long CL; unsigned long long I; unsigned long long AS; unsigned long long P; unsigned long long W; unsigned long long T; unsigned long long U; unsigned long long ia; unsigned long long gpp; unsigned long long hpp; } ;
typedef int local ;


 int FUNC_0 (int) ;
 void* FUNC_1 (unsigned long long) ;
 int FUNC_2 (int ,char const*,char*,size_t,int,unsigned long long,char,char,char,char,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_3 (struct hws_basic_entry*,int ,int) ;
 int FUNC_4 (char*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_5(const char *VAR_1, size_t VAR_2,
       struct hws_basic_entry *VAR_3)
{
 struct hws_basic_entry *VAR_4 = VAR_3;

 struct hws_basic_entry VAR_5;
 unsigned long long VAR_6 = FUNC_1(*(unsigned long long *)VAR_3);

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.def = FUNC_0(VAR_3->def);
 VAR_5.prim_asn = VAR_6 & 0xffff;
 VAR_5.CL = VAR_6 >> 30 & 0x3;
 VAR_5.I = VAR_6 >> 32 & 0x1;
 VAR_5.AS = VAR_6 >> 33 & 0x3;
 VAR_5.P = VAR_6 >> 35 & 0x1;
 VAR_5.W = VAR_6 >> 36 & 0x1;
 VAR_5.T = VAR_6 >> 37 & 0x1;
 VAR_5.U = VAR_6 >> 40 & 0xf;
 VAR_5.ia = FUNC_1(VAR_3->ia);
 VAR_5.gpp = FUNC_1(VAR_3->gpp);
 VAR_5.hpp = FUNC_1(VAR_3->hpp);
 VAR_4 = &VAR_5;

 if (VAR_4->def != 1) {
  FUNC_4("Invalid AUX trace basic entry [%#08zx]\n", VAR_2);
  return 0;
 }
 FUNC_2(VAR_0, VAR_1, "    [%#08zx] Basic   Def:%04x Inst:%#04x"
        " %c%c%c%c AS:%d ASN:%#04x IA:%#018llx\n"
        "\t\tCL:%d HPP:%#018llx GPP:%#018llx\n",
        VAR_2, VAR_4->def, VAR_4->U,
        VAR_4->T ? 'T' : ' ',
        VAR_4->W ? 'W' : ' ',
        VAR_4->P ? 'P' : ' ',
        VAR_4->I ? 'I' : ' ',
        VAR_4->AS, VAR_4->prim_asn, VAR_4->ia, VAR_4->CL,
        VAR_4->hpp, VAR_4->gpp);
 return 1;
}
