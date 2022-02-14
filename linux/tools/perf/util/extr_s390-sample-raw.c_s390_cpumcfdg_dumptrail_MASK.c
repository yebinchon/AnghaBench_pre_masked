
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_trailer_entry {void* mach_type; void* tod_base; void* progusage3; void* progusage2; void* progusage1; void* timestamp; void* cpu_speed; void* csvn; void* cfvn; scalar_t__ lcda; scalar_t__ caca; scalar_t__ mtda; scalar_t__ speed; scalar_t__ clock_base; void* res2; void* res1; void* flags; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int ,char const*,char*,size_t,char,char,char,char,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, size_t VAR_2,
        struct cf_trailer_entry *VAR_3)
{
 struct cf_trailer_entry VAR_4;

 VAR_4.flags = FUNC_2(VAR_3->flags);
 VAR_4.cfvn = FUNC_0(VAR_3->cfvn);
 VAR_4.csvn = FUNC_0(VAR_3->csvn);
 VAR_4.cpu_speed = FUNC_1(VAR_3->cpu_speed);
 VAR_4.timestamp = FUNC_2(VAR_3->timestamp);
 VAR_4.progusage1 = FUNC_2(VAR_3->progusage1);
 VAR_4.progusage2 = FUNC_2(VAR_3->progusage2);
 VAR_4.progusage3 = FUNC_2(VAR_3->progusage3);
 VAR_4.tod_base = FUNC_2(VAR_3->tod_base);
 VAR_4.mach_type = FUNC_0(VAR_3->mach_type);
 VAR_4.res1 = FUNC_0(VAR_3->res1);
 VAR_4.res2 = FUNC_1(VAR_3->res2);

 FUNC_3(VAR_0, VAR_1, "    [%#08zx] Trailer:%c%c%c%c%c"
        " Cfvn:%d Csvn:%d Speed:%d TOD:%#llx\n",
        VAR_2, VAR_4.clock_base ? 'T' : ' ',
        VAR_4.speed ? 'S' : ' ', VAR_4.mtda ? 'M' : ' ',
        VAR_4.caca ? 'C' : ' ', VAR_4.lcda ? 'L' : ' ',
        VAR_4.cfvn, VAR_4.csvn, VAR_4.cpu_speed, VAR_4.timestamp);
 FUNC_3(VAR_0, VAR_1, "\t\t1:%lx 2:%lx 3:%lx TOD-Base:%#llx"
        " Type:%x\n\n",
        VAR_4.progusage1, VAR_4.progusage2, VAR_4.progusage3,
        VAR_4.tod_base, VAR_4.mach_type);
}
