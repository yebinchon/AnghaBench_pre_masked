
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_fwdtsn_skip {scalar_t__ stream; } ;
typedef scalar_t__ __be16 ;



__attribute__((used)) static inline int FUNC_0(struct sctp_fwdtsn_skip *VAR_0,
        int VAR_1, __be16 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].stream == VAR_2)
   return VAR_3;
 }
 return VAR_3;
}
