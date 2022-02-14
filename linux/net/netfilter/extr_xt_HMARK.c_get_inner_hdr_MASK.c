
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct icmphdr {scalar_t__ type; } ;
typedef int _ih ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct icmphdr* FUNC_0 (struct sk_buff const*,int,int,struct icmphdr*) ;

__attribute__((used)) static int FUNC_1(const struct sk_buff *VAR_6, int VAR_7, int *VAR_8)
{
 const struct icmphdr *VAR_9;
 struct icmphdr VAR_10;


 VAR_9 = FUNC_0(VAR_6, *VAR_8 + VAR_7, sizeof(VAR_10), &VAR_10);
 if (VAR_9 == ((void*)0) || VAR_9->type > VAR_5)
  return 0;


 if (VAR_9->type != VAR_0 &&
     VAR_9->type != VAR_3 &&
     VAR_9->type != VAR_4 &&
     VAR_9->type != VAR_1 &&
     VAR_9->type != VAR_2)
  return 0;

 *VAR_8 += VAR_7 + sizeof(VAR_10);
 return 1;
}
