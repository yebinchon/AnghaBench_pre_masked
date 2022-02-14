
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * picture; scalar_t__ pictures; int * extra; scalar_t__ extras; int * text; scalar_t__ texts; int * comment_list; scalar_t__ comments; scalar_t__ version; } ;
struct TYPE_6__ {TYPE_1__ id3v2; } ;
typedef TYPE_2__ mpg123_handle ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(mpg123_handle *VAR_0)
{
 VAR_0->id3v2.version = 0;
 FUNC_0(VAR_0);
 VAR_0->id3v2.comments = 0;
 VAR_0->id3v2.comment_list = ((void*)0);
 VAR_0->id3v2.texts = 0;
 VAR_0->id3v2.text = ((void*)0);
 VAR_0->id3v2.extras = 0;
 VAR_0->id3v2.extra = ((void*)0);
 VAR_0->id3v2.pictures = 0;
 VAR_0->id3v2.picture = ((void*)0);
}
