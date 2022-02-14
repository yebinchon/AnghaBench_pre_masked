
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct game_capture {int cx; scalar_t__ active; } ;



__attribute__((used)) static uint32_t FUNC_0(void *VAR_0)
{
 struct game_capture *VAR_1 = VAR_0;
 return VAR_1->active ? VAR_1->cx : 0;
}
