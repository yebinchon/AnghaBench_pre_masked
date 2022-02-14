
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int format; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
typedef TYPE_2__ video_t ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 int VAR_0 ;

enum video_format FUNC_0(const video_t *VAR_1)
{
 return VAR_1 ? VAR_1->info.format : VAR_0;
}
