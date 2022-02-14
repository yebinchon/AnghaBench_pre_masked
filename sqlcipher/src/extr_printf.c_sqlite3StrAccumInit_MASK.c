
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_3__ {char* zText; int nAlloc; int mxAlloc; scalar_t__ printfFlags; scalar_t__ accError; scalar_t__ nChar; int * db; } ;
typedef TYPE_1__ StrAccum ;



void FUNC_0(StrAccum *VAR_0, sqlite3 *VAR_1, char *VAR_2, int VAR_3, int VAR_4){
  VAR_0->zText = VAR_2;
  VAR_0->db = VAR_1;
  VAR_0->nAlloc = VAR_3;
  VAR_0->mxAlloc = VAR_4;
  VAR_0->nChar = 0;
  VAR_0->accError = 0;
  VAR_0->printfFlags = 0;
}
