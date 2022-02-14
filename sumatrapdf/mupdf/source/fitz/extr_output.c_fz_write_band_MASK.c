
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_5__ {scalar_t__ line; scalar_t__ h; int (* trailer ) (int *,TYPE_1__*) ;int (* band ) (int *,TYPE_1__*,int,int,int,unsigned char const*) ;} ;
typedef TYPE_1__ fz_band_writer ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int,int,int,unsigned char const*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void FUNC_3(fz_context *VAR_1, fz_band_writer *VAR_2, int VAR_3, int VAR_4, const unsigned char *VAR_5)
{
 if (VAR_2 == ((void*)0) || VAR_2->band == ((void*)0))
  return;
 if (VAR_2->line + VAR_4 > VAR_2->h)
  VAR_4 = VAR_2->h - VAR_2->line;
 if (VAR_4 < 0) {
  FUNC_0(VAR_1, VAR_0, "Too much band data!");
 }
 if (VAR_4 > 0) {
  VAR_2->band(VAR_1, VAR_2, VAR_3, VAR_2->line, VAR_4, VAR_5);
  VAR_2->line += VAR_4;
 }
 if (VAR_2->line == VAR_2->h && VAR_2->trailer) {
  VAR_2->trailer(VAR_1, VAR_2);

  VAR_2->line++;
 }
}
