
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct ifa_cacheinfo {void* ifa_valid; void* ifa_prefered; void* tstamp; void* cstamp; } ;
typedef int ci ;


 int VAR_0 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct sk_buff*,int ,int,struct ifa_cacheinfo*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct ifa_cacheinfo VAR_6;

 VAR_6.cstamp = FUNC_0(VAR_2);
 VAR_6.tstamp = FUNC_0(VAR_3);
 VAR_6.ifa_prefered = VAR_4;
 VAR_6.ifa_valid = VAR_5;

 return FUNC_1(VAR_1, VAR_0, sizeof(VAR_6), &VAR_6);
}
