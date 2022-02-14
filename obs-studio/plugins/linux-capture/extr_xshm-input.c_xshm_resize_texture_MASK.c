
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xshm_data {int height; int width; scalar_t__ texture; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,int *,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct xshm_data *VAR_2)
{
 if (VAR_2->texture)
  FUNC_1(VAR_2->texture);
 VAR_2->texture = FUNC_0(VAR_2->width, VAR_2->height, VAR_0, 1,
       ((void*)0), VAR_1);
}
