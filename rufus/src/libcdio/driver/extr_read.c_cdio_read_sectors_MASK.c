
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lsn_t ;
typedef int driver_return_code_t ;
typedef int cdio_read_mode_t ;
typedef int CdIo_t ;







 int VAR_0 ;
 int FUNC_0 (int const*,void*,int ,int ) ;
 int FUNC_1 (int const*,void*,int ,int,int ) ;
 int FUNC_2 (int const*,void*,int ,int,int ) ;

driver_return_code_t
FUNC_3(const CdIo_t *VAR_1, void *VAR_2, lsn_t VAR_3,
                  cdio_read_mode_t VAR_4, uint32_t VAR_5)
{
  switch(VAR_4) {
  case 132:
    return FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_5);
  case 131:
    return FUNC_1 (VAR_1, VAR_2, VAR_3, 0, VAR_5);
  case 130:
    return FUNC_1 (VAR_1, VAR_2, VAR_3, 1, VAR_5);
  case 129:
    return FUNC_2 (VAR_1, VAR_2, VAR_3, 0, VAR_5);
  case 128:
    return FUNC_2 (VAR_1, VAR_2, VAR_3, 1, VAR_5);
  }

  return VAR_0;
}
