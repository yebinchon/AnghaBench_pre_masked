
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_4__ {scalar_t__ block_size; } ;
typedef TYPE_1__ audio_t ;


 int FUNC_0 (TYPE_1__ const*,int ,int ) ;

__attribute__((used)) static int64_t FUNC_1(const audio_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2) * (int64_t)VAR_0->block_size;
}
