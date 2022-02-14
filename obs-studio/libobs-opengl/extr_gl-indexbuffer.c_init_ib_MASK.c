
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_index_buffer {int * data; scalar_t__ dynamic; int size; int buffer; } ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,int *,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct gs_index_buffer *VAR_3)
{
 GLenum VAR_4 = VAR_3->dynamic ? VAR_0 : VAR_2;
 bool VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_3->buffer,
       VAR_3->size, VAR_3->data, VAR_4);

 if (!VAR_3->dynamic) {
  FUNC_0(VAR_3->data);
  VAR_3->data = ((void*)0);
 }

 return VAR_5;
}
