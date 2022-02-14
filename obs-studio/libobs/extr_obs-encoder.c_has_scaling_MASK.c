
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct obs_encoder {scalar_t__ scaled_width; scalar_t__ scaled_height; int media; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(const struct obs_encoder *VAR_0)
{
 uint32_t VAR_1 = FUNC_1(VAR_0->media);
 uint32_t VAR_2 = FUNC_0(VAR_0->media);

 return VAR_0->scaled_width && VAR_0->scaled_height &&
        (VAR_1 != VAR_0->scaled_width ||
  VAR_2 != VAR_0->scaled_height);
}
