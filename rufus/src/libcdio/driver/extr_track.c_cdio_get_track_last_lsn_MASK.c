
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ track_t ;
typedef scalar_t__ lsn_t ;
typedef int CdIo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,scalar_t__) ;

lsn_t
FUNC_1(const CdIo_t *VAR_1, track_t VAR_2)
{
  lsn_t VAR_3 = FUNC_0(VAR_1, VAR_2+1);

  if (VAR_0 == VAR_3) return VAR_0;

  return VAR_3 - 1;
}
