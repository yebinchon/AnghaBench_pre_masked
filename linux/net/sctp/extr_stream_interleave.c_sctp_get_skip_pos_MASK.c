
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ifwdtsn_skip {scalar_t__ stream; scalar_t__ flags; } ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __be16 ;



__attribute__((used)) static inline int FUNC_0(struct sctp_ifwdtsn_skip *VAR_0,
        int VAR_1, __be16 VAR_2, __u8 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_0[VAR_4].stream == VAR_2 &&
      VAR_0[VAR_4].flags == VAR_3)
   return VAR_4;

 return VAR_4;
}
