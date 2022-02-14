
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zerolength ;
typedef int uint8_t ;
typedef int uint16_t ;
struct trace_seq {int dummy; } ;
struct in6_addr {scalar_t__* s6_addr16; int * s6_addr; } ;


 scalar_t__ FUNC_0 (struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct trace_seq*,char,int *) ;
 int FUNC_6 (struct trace_seq*,char*,...) ;

__attribute__((used)) static void FUNC_7(struct trace_seq *VAR_0, unsigned char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 unsigned char VAR_5[8];
 int VAR_6 = 1;
 int VAR_7 = -1;
 uint16_t VAR_8;
 uint8_t VAR_9, VAR_10;
 bool VAR_11 = 0;
 bool VAR_12;
 struct in6_addr VAR_13;

 FUNC_2(&VAR_13, VAR_1, sizeof(struct in6_addr));

 VAR_12 = FUNC_1(&VAR_13) || FUNC_0(&VAR_13);

 FUNC_3(VAR_5, 0, sizeof(VAR_5));

 if (VAR_12)
  VAR_4 = 6;
 else
  VAR_4 = 8;


 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  for (VAR_3 = VAR_2; VAR_3 < VAR_4; VAR_3++) {
   if (VAR_13[VAR_3] != 0)
    break;
   VAR_5[VAR_2]++;
  }
 }
 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  if (VAR_5[VAR_2] > VAR_6) {
   VAR_6 = VAR_5[VAR_2];
   VAR_7 = VAR_2;
  }
 }
 if (VAR_6 == 1)
  VAR_7 = -1;


 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  if (VAR_2 == VAR_7) {
   if (VAR_11 || VAR_2 == 0)
    FUNC_6(VAR_0, ":");
   FUNC_6(VAR_0, ":");
   VAR_11 = 0;
   VAR_2 += VAR_6 - 1;
   continue;
  }
  if (VAR_11) {
   FUNC_6(VAR_0, ":");
   VAR_11 = 0;
  }

  VAR_8 = FUNC_4(VAR_13[VAR_2]);
  VAR_9 = VAR_8 >> 8;
  VAR_10 = VAR_8 & 0xff;
  if (VAR_9)
   FUNC_6(VAR_0, "%x%02x", VAR_9, VAR_10);
  else
   FUNC_6(VAR_0, "%x", VAR_10);

  VAR_11 = 1;
 }

 if (VAR_12) {
  if (VAR_11)
   FUNC_6(VAR_0, ":");
  FUNC_5(VAR_0, 'I', &VAR_13[12]);
 }

 return;
}
