
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_6__ {int page_size; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int *,int) ;

int FUNC_3(libgdbr_t *VAR_0, ut64 VAR_1, ut8 *VAR_2, int VAR_3) {
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = VAR_0->page_size;
 VAR_4 = 0;

 if (!FUNC_0 (VAR_0)) {
  goto end;
 }


 VAR_6 = VAR_7 - (VAR_1 & (VAR_7 - 1));
 if (VAR_6 >= VAR_3) {
  VAR_4 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3);
  goto end;
 }
 if ((VAR_5 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_6)) != VAR_6) {
  VAR_4 = VAR_5;
  goto end;
 }
 VAR_3 -= VAR_6;
 VAR_1 += VAR_6;
 VAR_2 += VAR_6;
 VAR_4 += VAR_5;

 while (VAR_3 > VAR_7) {
  if ((VAR_5 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_7)) != VAR_7) {
   if (VAR_5 < 1) {
    goto end;
   }
   VAR_4 += VAR_5;
   goto end;
  }
  VAR_3 -= VAR_7;
  VAR_1 += VAR_7;
  VAR_2 += VAR_7;
  VAR_4 += VAR_7;
 }

 if ((VAR_5 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3)) < 0) {
  goto end;
 }

 VAR_4 += VAR_5;
end:
 FUNC_1 (VAR_0);
 return VAR_4;
}
