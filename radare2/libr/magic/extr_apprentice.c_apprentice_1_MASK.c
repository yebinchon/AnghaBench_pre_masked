
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut32 ;
struct r_magic {int dummy; } ;
struct mlist {int mapped; struct mlist* prev; struct mlist* next; int nmagic; struct r_magic* magic; } ;
struct TYPE_8__ {char const* file; scalar_t__ haderr; } ;
typedef TYPE_1__ RMagic ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct r_magic**,int *,char const*) ;
 int FUNC_1 (TYPE_1__*,struct r_magic**,int *,char const*,int) ;
 int FUNC_2 (TYPE_1__*,struct r_magic**,int *,char const*) ;
 int FUNC_3 (struct r_magic*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*,unsigned long,unsigned long) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (struct r_magic*) ;
 scalar_t__ VAR_2 ;
 struct mlist* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(RMagic *VAR_3, const char *VAR_4, int VAR_5, struct mlist *VAR_6) {
 struct r_magic *VAR_7 = ((void*)0);
 ut32 VAR_8 = 0;
 struct mlist *VAR_9;
 int VAR_10 = -1;
 int VAR_11;

 if (!VAR_3) {
  return -1;
 }
 VAR_3->haderr = 0;
 if (VAR_2 != VAR_1) {
  FUNC_4(VAR_3, 0, "magic element size %lu != %lu",
      (unsigned long)(size_t)sizeof (*VAR_7),
      (unsigned long)VAR_1);
  return -1;
 }

 VAR_3->file = VAR_4;
 if (VAR_5 == VAR_0) {
  VAR_10 = FUNC_1 (VAR_3, &VAR_7, &VAR_8, VAR_4, VAR_5);
  if (VAR_10 != 0) {
   return -1;
  }
  VAR_10 = FUNC_0 (VAR_3, &VAR_7, &VAR_8, VAR_4);
  FUNC_6 (VAR_7);
  return VAR_10;
 }

 if ((VAR_10 = FUNC_2 (VAR_3, &VAR_7, &VAR_8, VAR_4)) == -1) {


  VAR_10 = FUNC_1 (VAR_3, &VAR_7, &VAR_8, VAR_4, VAR_5);
  if (VAR_10 != 0) {
   return -1;
  }
 }

 VAR_11 = VAR_10;

 if (!VAR_7) {
  FUNC_3 (VAR_7, VAR_11, VAR_8);
  return -1;
 }

 if (!(VAR_9 = FUNC_7 (sizeof (*VAR_9)))) {
  FUNC_3 (VAR_7, VAR_11, VAR_8);
  FUNC_5 (VAR_3, sizeof (*VAR_9));
  return -1;
 }

 VAR_9->magic = VAR_7;
 VAR_9->nmagic = VAR_8;
 VAR_9->mapped = VAR_11;

 VAR_6->prev->next = VAR_9;
 VAR_9->prev = VAR_6->prev;
 VAR_9->next = VAR_6;
 VAR_6->prev = VAR_9;
 return 0;
}
