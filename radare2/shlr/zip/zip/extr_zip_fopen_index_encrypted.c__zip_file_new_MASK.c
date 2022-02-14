
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_file {int * src; scalar_t__ eof; int error; struct zip* za; } ;
struct zip {scalar_t__ nfile; scalar_t__ nfile_alloc; struct zip_file** file; int error; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct zip_file*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct zip_file**,unsigned int) ;

__attribute__((used)) static struct zip_file *
FUNC_5(struct zip *VAR_1)
{
    struct zip_file *VAR_2, **VAR_3;

    if ((VAR_2=(struct zip_file *)FUNC_3(sizeof(struct zip_file))) == ((void*)0)) {
 FUNC_1(&VAR_1->error, VAR_0, 0);
 return ((void*)0);
    }

    if (VAR_1->nfile+1 >= VAR_1->nfile_alloc) {
 unsigned int VAR_4;
 VAR_4 = VAR_1->nfile_alloc + 10;
 VAR_3 = (struct zip_file **)FUNC_4(VAR_1->file,
        VAR_4*sizeof(struct zip_file *));
 if (VAR_3 == ((void*)0)) {
     FUNC_1(&VAR_1->error, VAR_0, 0);
     FUNC_2(VAR_2);
     return ((void*)0);
 }
 VAR_1->nfile_alloc = VAR_4;
 VAR_1->file = VAR_3;
    }

    VAR_1->file[VAR_1->nfile++] = VAR_2;

    VAR_2->za = VAR_1;
    FUNC_0(&VAR_2->error);
    VAR_2->eof = 0;
    VAR_2->src = ((void*)0);

    return VAR_2;
}
