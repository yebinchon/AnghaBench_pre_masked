
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chroma_key_filter_data {float contrast; float brightness; float gamma; int color; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline void FUNC_3(struct chroma_key_filter_data *VAR_4,
      obs_data_t *VAR_5)
{
 uint32_t VAR_6 =
  (uint32_t)FUNC_1(VAR_5, VAR_3);
 uint32_t VAR_7 = 0xFFFFFF | (((VAR_6 * 255) / 100) << 24);
 double VAR_8 = FUNC_0(VAR_5, VAR_1);
 double VAR_9 = FUNC_0(VAR_5, VAR_0);
 double VAR_10 = FUNC_0(VAR_5, VAR_2);

 VAR_8 = (VAR_8 < 0.0) ? (1.0 / (-VAR_8 + 1.0))
        : (VAR_8 + 1.0);

 VAR_9 *= 0.5;

 VAR_10 = (VAR_10 < 0.0) ? (-VAR_10 + 1.0) : (1.0 / (VAR_10 + 1.0));

 VAR_4->contrast = (float)VAR_8;
 VAR_4->brightness = (float)VAR_9;
 VAR_4->gamma = (float)VAR_10;

 FUNC_2(&VAR_4->color, VAR_7);
}
