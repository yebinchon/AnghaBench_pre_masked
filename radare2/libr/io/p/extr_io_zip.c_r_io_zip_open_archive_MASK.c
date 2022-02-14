
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct zip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 struct zip* FUNC_1 (char const*,int ,int*) ;

struct zip *FUNC_2(const char *VAR_6, ut32 VAR_7, int VAR_8, int VAR_9) {
 struct zip * VAR_10 = ((void*)0);
 int VAR_11;
 if (!VAR_6) {
  return ((void*)0);
 }
 if ((VAR_10 = FUNC_1 (VAR_6, VAR_7, &VAR_11))) {
  return VAR_10;
 }
 if (VAR_11 == VAR_1) {
  FUNC_0 ("ZIP File Error: Invalid file name (NULL).\n");
 } else if (VAR_11 == VAR_4) {
  FUNC_0 ("ZIP File Error: File could not be opened file name.\n");
 } else if (VAR_11 == VAR_2) {
  FUNC_0 ("ZIP File Error: File does not exist.\n");
 } else if (VAR_11 == VAR_5) {
  FUNC_0 ("ZIP File Error: Read error occurred.\n");
 } else if (VAR_11 == VAR_3) {
  FUNC_0 ("ZIP File Error: File is not a valid ZIP archive.\n");
 } else if (VAR_11 == VAR_0) {
  FUNC_0 ("ZIP File Error: ZIP file had some inconsistencies archive.\n");
 } else {
  FUNC_0 ("ZIP File Error: Something bad happened, get your debug on.\n");
 }
 return ((void*)0);
}
