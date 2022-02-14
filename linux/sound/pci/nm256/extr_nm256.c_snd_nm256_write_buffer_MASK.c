
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nm256 {int buffer_size; scalar_t__ buffer; TYPE_1__* card; scalar_t__ buffer_start; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (scalar_t__,void*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct nm256 *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
 VAR_2 -= VAR_0->buffer_start;
 FUNC_1(VAR_0->buffer + VAR_2, VAR_1, VAR_3);
}
