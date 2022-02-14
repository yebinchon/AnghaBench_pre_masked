
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serializer {int (* seek ) (int ,int,int) ;int data; } ;
typedef int int64_t ;
typedef enum serialize_seek_type { ____Placeholder_serialize_seek_type } serialize_seek_type ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static inline int64_t FUNC_1(struct serializer *VAR_0, int64_t VAR_1,
          enum serialize_seek_type VAR_2)
{
 if (VAR_0 && VAR_0->seek)
  return VAR_0->seek(VAR_0->data, VAR_1, VAR_2);
 return -1;
}
