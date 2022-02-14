
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_trailer_entry {int clock_base; unsigned long long progusage2; int * progusage; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long long FUNC_1 (struct hws_trailer_entry*,int) ;

__attribute__((used)) static unsigned long long FUNC_2(const unsigned char *VAR_1)
{
 struct hws_trailer_entry *VAR_2;
 unsigned long long VAR_3, VAR_4;
 bool VAR_5;

 VAR_2 = (struct hws_trailer_entry *)(VAR_1 + VAR_0
           - sizeof(*VAR_2));


 VAR_5 = FUNC_0(VAR_2->progusage[0]) >> 63 & 0x1;
 VAR_4 = FUNC_0(VAR_2->progusage[1]);




 if (!VAR_5)
  return 0;





 VAR_3 = FUNC_1(VAR_2, VAR_5) - VAR_4;
 VAR_3 = (VAR_3 >> 9) * 125 + (((VAR_3 & 0x1ff) * 125) >> 9);
 return VAR_3;
}
