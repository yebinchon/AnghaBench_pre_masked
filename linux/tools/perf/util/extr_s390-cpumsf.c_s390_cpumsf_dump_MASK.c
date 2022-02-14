
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int te ;
struct s390_cpumsf {int machine_type; } ;
struct hws_trailer_entry {unsigned short bsdes; unsigned short dsdes; } ;
struct hws_diag_entry {int dummy; } ;
struct hws_basic_entry {int dummy; } ;


 char* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char const*,char*,size_t) ;
 int FUNC_1 (struct hws_trailer_entry*,unsigned char*,int) ;
 int FUNC_2 (char*,size_t,int ,unsigned short,unsigned short) ;
 scalar_t__ FUNC_3 (char const*,size_t,struct hws_basic_entry*) ;
 scalar_t__ FUNC_4 (char const*,size_t,struct hws_diag_entry*) ;
 int FUNC_5 (unsigned short,size_t) ;
 scalar_t__ FUNC_6 (char const*,size_t,struct hws_trailer_entry*) ;
 int FUNC_7 (int ,unsigned char*,size_t,unsigned short*,unsigned short*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(struct s390_cpumsf *VAR_3,
        unsigned char *VAR_4, size_t VAR_5)
{
 const char *VAR_6 = VAR_0;
 struct hws_basic_entry *VAR_7;
 struct hws_diag_entry *VAR_8;
 unsigned short VAR_9, VAR_10;
 size_t VAR_11 = 0;

 FUNC_0(VAR_2, VAR_6,
        ". ... s390 AUX data: size %zu bytes\n",
        VAR_5);

 if (!FUNC_7(VAR_3->machine_type, VAR_4, VAR_5, &VAR_9,
      &VAR_10)) {
  FUNC_2("Invalid AUX trace data block size:%zu"
         " (type:%d bsdes:%hd dsdes:%hd)\n",
         VAR_5, VAR_3->machine_type, VAR_9, VAR_10);
  return;
 }




 while (VAR_11 < VAR_5) {

  VAR_7 = (struct hws_basic_entry *)(VAR_4 + VAR_11);
  if (FUNC_3(VAR_6, VAR_11, VAR_7))
   VAR_11 += VAR_9;
  else
   return;


  VAR_8 = (struct hws_diag_entry *)(VAR_4 + VAR_11);
  if (FUNC_4(VAR_6, VAR_11, VAR_8))
   VAR_11 += VAR_10;
  else
   return;


  if (!FUNC_5(VAR_9 + VAR_10, VAR_11)) {

   struct hws_trailer_entry VAR_12;

   VAR_11 = (VAR_11 + VAR_1)
          & ~(VAR_1 - 1);
   VAR_11 -= sizeof(VAR_12);
   FUNC_1(&VAR_12, VAR_4 + VAR_11, sizeof(VAR_12));



   VAR_12.bsdes = VAR_9;
   VAR_12.dsdes = VAR_10;
   if (FUNC_6(VAR_6, VAR_11, &VAR_12))
    VAR_11 += sizeof(VAR_12);
   else
    return;
  }
 }
}
