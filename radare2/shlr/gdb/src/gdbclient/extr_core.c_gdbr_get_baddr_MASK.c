
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_8__ {scalar_t__ data_len; char* data; } ;
typedef TYPE_1__ libgdbr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,int *,int) ;

ut64 FUNC_10(libgdbr_t *VAR_1) {
 ut64 VAR_2, VAR_3 = VAR_0;
 char *VAR_4;
 if (!VAR_1) {
  return VAR_0;
 }

 if (!FUNC_0 (VAR_1)) {
  goto end;
 }
 if (FUNC_6 (VAR_1, "qOffsets") < 0 || FUNC_4 (VAR_1, 0) < 0
      || FUNC_5 (VAR_1) < 0 || VAR_1->data_len == 0) {
  VAR_3 = VAR_0;
  goto end;
 }
 if (FUNC_3 (VAR_1->data, "TextSeg=")) {
  VAR_4 = VAR_1->data + FUNC_8 ("TextSeg=");
  if (!FUNC_2 (*VAR_4)) {
   goto end;
  }
  VAR_2 = FUNC_9 (VAR_4, ((void*)0), 16);
  if (VAR_2 < VAR_3) {
   VAR_3 = VAR_2;
  }
  if (!(VAR_4 = FUNC_7 (VAR_4, ';'))) {
   goto end;
  }
  VAR_4++;
  if (*VAR_4 && FUNC_3 (VAR_4, "DataSeg=")) {
   VAR_4 += FUNC_8 ("DataSeg=");
   if (!FUNC_2 (*VAR_4)) {
    goto end;
   }
   VAR_2 = FUNC_9 (VAR_4, ((void*)0), 16);
   if (VAR_2 < VAR_3) {
    VAR_3 = VAR_2;
   }
  }
  goto end;
 }
 if (!FUNC_3 (VAR_1->data, "Text=")) {
  goto end;
 }
 VAR_4 = VAR_1->data + FUNC_8 ("Text=");
 if (!FUNC_2 (*VAR_4)) {
  goto end;
 }
 VAR_2 = FUNC_9 (VAR_4, ((void*)0), 16);
 if (VAR_2 < VAR_3) {
  VAR_3 = VAR_2;
 }
 if (!(VAR_4 = FUNC_7 (VAR_4, ';')) || !FUNC_3 (VAR_4 + 1, "Data=")) {
  VAR_3 = VAR_0;
  goto end;
 }
 VAR_4 += FUNC_8 (";Data=");
 if (!FUNC_2 (*VAR_4)) {
  VAR_3 = VAR_0;
  goto end;
 }
 VAR_2 = FUNC_9 (VAR_4, ((void*)0), 16);
 if (VAR_2 < VAR_3) {
  VAR_3 = VAR_2;
 }
 if (!(VAR_4 = FUNC_7 (VAR_4, ';'))) {
  goto end;
 }
 VAR_4++;
 if (FUNC_3 (VAR_4, "Bss=")) {
  VAR_4 += FUNC_8 ("Bss=");
  if (!FUNC_2 (*VAR_4)) {
   goto end;
  }
  VAR_2 = FUNC_9 (VAR_4, ((void*)0), 16);
  if (VAR_2 < VAR_3) {
   VAR_3 = VAR_2;
  }
 }
end:
 FUNC_1 (VAR_1);
 return VAR_3;
}
