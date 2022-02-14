
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t xml_encoding ;
struct xml_encoding_data {int cp; } ;
typedef int UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct xml_encoding_data* VAR_3 ;

__attribute__((used)) static HRESULT FUNC_1(xml_encoding VAR_4, UINT *VAR_5)
{
    const struct xml_encoding_data *VAR_6;

    if (VAR_4 == VAR_2)
    {
        FUNC_0("unsupported encoding %d\n", VAR_4);
        return VAR_0;
    }

    VAR_6 = &VAR_3[VAR_4];
    *VAR_5 = VAR_6->cp;

    return VAR_1;
}
