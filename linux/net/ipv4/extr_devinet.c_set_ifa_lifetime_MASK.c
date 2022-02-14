
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ifaddr {int ifa_flags; unsigned long ifa_valid_lft; unsigned long ifa_preferred_lft; scalar_t__ ifa_tstamp; scalar_t__ ifa_cstamp; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct in_ifaddr *VAR_4, __u32 VAR_5,
        __u32 VAR_6)
{
 unsigned long VAR_7;

 VAR_4->ifa_flags &= ~(VAR_2 | VAR_1);

 VAR_7 = FUNC_1(VAR_5, VAR_0);
 if (FUNC_0(VAR_7))
  VAR_4->ifa_valid_lft = VAR_7;
 else
  VAR_4->ifa_flags |= VAR_2;

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 if (FUNC_0(VAR_7)) {
  if (VAR_7 == 0)
   VAR_4->ifa_flags |= VAR_1;
  VAR_4->ifa_preferred_lft = VAR_7;
 }
 VAR_4->ifa_tstamp = VAR_3;
 if (!VAR_4->ifa_cstamp)
  VAR_4->ifa_cstamp = VAR_4->ifa_tstamp;
}
