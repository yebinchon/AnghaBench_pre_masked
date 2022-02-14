
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cdf_stream_t ;
typedef int cdf_sat_t ;
typedef int cdf_info_t ;
typedef int cdf_header_t ;
struct TYPE_5__ {int d_size; int d_stream_first_sector; } ;
typedef TYPE_1__ cdf_directory_t ;
struct TYPE_6__ {TYPE_1__* dir_tab; } ;
typedef TYPE_2__ cdf_dir_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,char const*,int ) ;
 int FUNC_1 (int const*,int const*,int const*,int const*,int const*,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int) ;

int
FUNC_3(const cdf_info_t *VAR_1, const cdf_header_t *VAR_2,
    const cdf_sat_t *VAR_3, const cdf_sat_t *VAR_4, const cdf_stream_t *VAR_5,
    const cdf_dir_t *VAR_6, const char *VAR_7, cdf_stream_t *VAR_8)
{
 const cdf_directory_t *VAR_9;
 int VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_0);

 if (VAR_10 <= 0) {
  FUNC_2(VAR_8, 0, sizeof(*VAR_8));
  return -1;
 }

 VAR_9 = &VAR_6->dir_tab[VAR_10 - 1];
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_9->d_stream_first_sector, VAR_9->d_size, VAR_8);
}
