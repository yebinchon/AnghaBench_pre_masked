
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_peer {unsigned long rate_tokens; unsigned long rate_last; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;

bool FUNC_0(struct inet_peer *VAR_2, int VAR_3)
{
 unsigned long VAR_4, VAR_5;
 bool VAR_6 = 0;

 if (!VAR_2)
  return 1;

 VAR_5 = VAR_2->rate_tokens;
 VAR_4 = VAR_1;
 VAR_5 += VAR_4 - VAR_2->rate_last;
 VAR_2->rate_last = VAR_4;
 if (VAR_5 > VAR_0 * VAR_3)
  VAR_5 = VAR_0 * VAR_3;
 if (VAR_5 >= VAR_3) {
  VAR_5 -= VAR_3;
  VAR_6 = 1;
 }
 VAR_2->rate_tokens = VAR_5;
 return VAR_6;
}
