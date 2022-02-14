
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_bool ;
typedef int wchar_t ;
struct TYPE_3__ {int finished; int* dirw; int handle; int fileinfo; scalar_t__ offset; } ;
typedef int HANDLE ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int ,int *,int ,int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (int*,char*) ;
 int FUNC_7 (int*,int*) ;
 size_t FUNC_8 (int*) ;

int FUNC_9(DIR *VAR_7)
{

 wchar_t *VAR_8;
 HANDLE VAR_9;
 size_t VAR_10, VAR_11, VAR_12;
 zend_bool VAR_13;

 FUNC_0(VAR_7->handle);

 VAR_7->offset = 0;
 VAR_7->finished = 0;


 VAR_10 = FUNC_8((wchar_t *)VAR_7->dirw);

 VAR_13 = VAR_10 >= 3 && FUNC_2(VAR_7->dirw[0]) && L':' == VAR_7->dirw[1] && FUNC_3(VAR_7->dirw[2]);

 VAR_11 = VAR_10 + 2;
 if (VAR_11 >= VAR_6 && VAR_13) {
  VAR_11 += VAR_5;
 }

 VAR_8 = (wchar_t *)FUNC_5((VAR_11 + 1)*sizeof(wchar_t));
 if (VAR_8 == ((void*)0)) {
  return -1;
 }

 if (VAR_11 >= VAR_6 && VAR_13) {
  FUNC_7(VAR_8, VAR_4);
  FUNC_7(VAR_8 + VAR_5, VAR_7->dirw);
  VAR_12 = VAR_10 + VAR_5 - 1;
 } else {
  FUNC_7(VAR_8, VAR_7->dirw);
  VAR_12 = VAR_10 - 1;
 }

 if (VAR_12 >= 0 && (VAR_8[VAR_12] == L'/' ||
    (VAR_8[VAR_12] == L'\\' && VAR_12 == 0)))
  VAR_8[VAR_12] = L'\0';
 FUNC_6(VAR_8, L"\\*");

 if ((VAR_9 = FUNC_1(VAR_8, VAR_1, &(VAR_7->fileinfo), VAR_2, ((void*)0), VAR_0)) == VAR_3) {
  VAR_7->finished = 1;
 }

 FUNC_4(VAR_8);
 VAR_7->handle = VAR_9;

 return 0;
}
