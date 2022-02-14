
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t filename_len; unsigned short inode; int filename; TYPE_1__* phar; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_4__ {size_t fname_len; int fname; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char*,int ,size_t) ;
 scalar_t__ FUNC_2 (char*,size_t) ;

__attribute__((used)) static inline void FUNC_3(phar_entry_info *VAR_1)
{
 char VAR_2[VAR_0];
 size_t VAR_3;
 size_t VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_0, VAR_1->filename_len + VAR_1->phar->fname_len);

 VAR_4 = FUNC_0(VAR_1->phar->fname_len, VAR_3);
 if (VAR_1->phar->fname) {
  FUNC_1(VAR_2, VAR_1->phar->fname, VAR_4);
 }

 VAR_5 = FUNC_0(VAR_3 - VAR_4, VAR_1->filename_len);
 FUNC_1(VAR_2 + VAR_4, VAR_1->filename, VAR_5);

 VAR_1->inode = (unsigned short) FUNC_2(VAR_2, VAR_3);
}
