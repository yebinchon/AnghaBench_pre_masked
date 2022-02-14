
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_trailer_entry {int flags; unsigned long long f; unsigned long long a; unsigned long long t; int bsdes; int overflow; int clock_base; int* progusage; int progusage2; void* dsdes; int timestamp; } ;
struct hws_basic_entry {int dummy; } ;
typedef int local ;


 void* FUNC_0 (unsigned long long const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,char*,size_t,float,char,char,int,void*,int,int ,int,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct hws_trailer_entry*,int ,int) ;
 int FUNC_5 (char*,size_t) ;
 int VAR_0 ;
 int FUNC_6 (struct hws_trailer_entry*,int) ;

__attribute__((used)) static bool FUNC_7(const char *VAR_1, size_t VAR_2,
         struct hws_trailer_entry *VAR_3)
{

 struct hws_trailer_entry VAR_4;
 const unsigned long long VAR_5 = FUNC_1(VAR_3->flags);

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.f = VAR_5 >> 63 & 0x1;
 VAR_4.a = VAR_5 >> 62 & 0x1;
 VAR_4.t = VAR_5 >> 61 & 0x1;
 VAR_4.bsdes = FUNC_0((VAR_5 >> 16 & 0xffff));
 VAR_4.dsdes = FUNC_0((VAR_5 & 0xffff));
 FUNC_3(&VAR_4.timestamp, VAR_3->timestamp, sizeof(VAR_3->timestamp));
 VAR_4.overflow = FUNC_1(VAR_3->overflow);
 VAR_4.clock_base = FUNC_1(VAR_3->progusage[0]) >> 63 & 1;
 VAR_4.progusage2 = FUNC_1(VAR_3->progusage2);
 VAR_3 = &VAR_4;

 if (VAR_3->bsdes != sizeof(struct hws_basic_entry)) {
  FUNC_5("Invalid AUX trace trailer entry [%#08zx]\n", VAR_2);
  return 0;
 }
 FUNC_2(VAR_0, VAR_1, "    [%#08zx] Trailer %c%c%c bsdes:%d"
        " dsdes:%d Overflow:%lld Time:%#llx\n"
        "\t\tC:%d TOD:%#lx\n",
        VAR_2,
        VAR_3->f ? 'F' : ' ',
        VAR_3->a ? 'A' : ' ',
        VAR_3->t ? 'T' : ' ',
        VAR_3->bsdes, VAR_3->dsdes, VAR_3->overflow,
        FUNC_6(VAR_3, VAR_3->clock_base),
        VAR_3->clock_base, VAR_3->progusage2);
 return 1;
}
