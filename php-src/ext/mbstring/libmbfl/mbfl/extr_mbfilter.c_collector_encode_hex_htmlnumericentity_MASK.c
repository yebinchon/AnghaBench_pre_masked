
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct collector_htmlnumericentity_data {int mapsize; int* convmap; TYPE_1__* decoder; } ;
struct TYPE_8__ {int (* filter_function ) (int,TYPE_1__*) ;} ;


 int* VAR_0 ;
 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(int VAR_1, void *VAR_2)
{
 struct collector_htmlnumericentity_data *VAR_3 = (struct collector_htmlnumericentity_data *)VAR_2;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, *VAR_10;

 VAR_9 = VAR_3->mapsize;
 VAR_4 = 0;
 VAR_5 = 0;
 while (VAR_5 < VAR_9) {
  VAR_10 = &(VAR_3->convmap[VAR_5*4]);
  if (VAR_1 >= VAR_10[0] && VAR_1 <= VAR_10[1]) {
   VAR_6 = (VAR_1 + VAR_10[2]) & VAR_10[3];
   if (VAR_6 >= 0) {
    (*VAR_3->decoder->filter_function)(0x26, VAR_3->decoder);
    (*VAR_3->decoder->filter_function)(0x23, VAR_3->decoder);
    (*VAR_3->decoder->filter_function)(0x78, VAR_3->decoder);
    VAR_7 = 0x1000000;
    VAR_6 %= VAR_7;
    while (VAR_7 > 0) {
     VAR_8 = VAR_6/VAR_7;
     if (VAR_8 || VAR_4) {
      VAR_4 = 1;
      VAR_6 %= VAR_7;
      (*VAR_3->decoder->filter_function)(VAR_0[VAR_8], VAR_3->decoder);
     }
     VAR_7 /= 16;
    }
    if (!VAR_4) {
     VAR_4 = 1;
     (*VAR_3->decoder->filter_function)(VAR_0[0], VAR_3->decoder);
    }
    (*VAR_3->decoder->filter_function)(0x3b, VAR_3->decoder);
   }
  }
  if (VAR_4) {
   break;
  }
  VAR_5++;
 }
 if (!VAR_4) {
  (*VAR_3->decoder->filter_function)(VAR_1, VAR_3->decoder);
 }

 return VAR_1;
}
