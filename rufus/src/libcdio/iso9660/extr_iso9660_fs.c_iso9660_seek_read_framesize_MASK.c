
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int lsn_t ;
struct TYPE_3__ {int i_fuzzy_offset; int i_datastart; int stream; scalar_t__ i_framesize; } ;
typedef TYPE_1__ iso9660_t ;
typedef int int64_t ;


 int VAR_0 ;
 long FUNC_0 (int ,void*,int ,long) ;
 long FUNC_1 (int ,int,int ) ;

__attribute__((used)) static long int
FUNC_2 (const iso9660_t *VAR_1, void *VAR_2,
        lsn_t VAR_3, long int VAR_4,
        uint16_t VAR_5)
{
  long int VAR_6;
  int64_t VAR_7;

  if (!VAR_1) return 0;
  VAR_7 = (VAR_3 * (int64_t)(VAR_1->i_framesize))
    + VAR_1->i_fuzzy_offset + VAR_1->i_datastart;

  VAR_6 = FUNC_1 (VAR_1->stream, VAR_7, VAR_0);
  if (VAR_6!=0) return 0;
  return FUNC_0 (VAR_1->stream, VAR_2, VAR_5, VAR_4);
}
