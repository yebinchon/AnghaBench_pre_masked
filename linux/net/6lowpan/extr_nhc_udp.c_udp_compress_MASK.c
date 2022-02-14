
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tmp ;
struct udphdr {int source; int dest; int check; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int**,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 struct udphdr* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_8, u8 **VAR_9)
{
 const struct udphdr *VAR_10 = FUNC_3(VAR_8);
 u8 VAR_11;

 if (((FUNC_1(VAR_10->source) & VAR_0) ==
      VAR_1) &&
     ((FUNC_1(VAR_10->dest) & VAR_0) ==
      VAR_1)) {
  FUNC_2("UDP header: both ports compression to 4 bits\n");

  VAR_11 = VAR_7;
  FUNC_0(VAR_9, &VAR_11, sizeof(VAR_11));

  VAR_11 = FUNC_1(VAR_10->dest) - VAR_1 +
        ((FUNC_1(VAR_10->source) - VAR_1) << 4);
  FUNC_0(VAR_9, &VAR_11, sizeof(VAR_11));
 } else if ((FUNC_1(VAR_10->dest) & VAR_2) ==
   VAR_3) {
  FUNC_2("UDP header: remove 8 bits of dest\n");

  VAR_11 = VAR_5;
  FUNC_0(VAR_9, &VAR_11, sizeof(VAR_11));

  FUNC_0(VAR_9, &VAR_10->source, sizeof(VAR_10->source));

  VAR_11 = FUNC_1(VAR_10->dest) - VAR_3;
  FUNC_0(VAR_9, &VAR_11, sizeof(VAR_11));
 } else if ((FUNC_1(VAR_10->source) & VAR_2) ==
   VAR_3) {
  FUNC_2("UDP header: remove 8 bits of source\n");

  VAR_11 = VAR_6;
  FUNC_0(VAR_9, &VAR_11, sizeof(VAR_11));

  VAR_11 = FUNC_1(VAR_10->source) - VAR_3;
  FUNC_0(VAR_9, &VAR_11, sizeof(VAR_11));

  FUNC_0(VAR_9, &VAR_10->dest, sizeof(VAR_10->dest));
 } else {
  FUNC_2("UDP header: can't compress\n");

  VAR_11 = VAR_4;
  FUNC_0(VAR_9, &VAR_11, sizeof(VAR_11));

  FUNC_0(VAR_9, &VAR_10->source, sizeof(VAR_10->source));

  FUNC_0(VAR_9, &VAR_10->dest, sizeof(VAR_10->dest));
 }


 FUNC_0(VAR_9, &VAR_10->check, sizeof(VAR_10->check));

 return 0;
}
